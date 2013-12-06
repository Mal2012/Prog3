/*
 * a31.cpp
 *
 *  Created on: 05.12.2013
 *      Author: Malcolm
 */

/*
 * a29.c
 *
 *  Created on: 19.11.2013
 *      Author: Malcolm
 */
#include "a31.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init(struct List *list){
	list->first = NULL;
	list->last = NULL;
}

void insert(struct List *list, int val, char* dat){
	  	struct Element* neuelem = (struct Element*)malloc(sizeof(struct Element));
	    neuelem->tagesproduktion = val;
	    strncpy(neuelem->datum, dat, 20);

	    neuelem->next = list->first;
	    list->first = neuelem;

	    if (!list->last)
	    {
	        /* Erstes Element der Liste */
	        list->last = neuelem;
	    }
	}

int removeElements(struct List* list, int val){
	struct Element* current, *prev, *removable;
	unsigned int no_del_elem = 0;

	    if (list->first == NULL)
	        return 0;

	    current = list->first;
	    prev = list->first;
	    removable = NULL;

	    while(current!=NULL)
	    {
	        if (current->tagesproduktion == val)
	        {
	            if (current == list->first)
	            {
	                list->first = current->next;
	                if (list->last == current)
	                    list->last = NULL;
	            }
	            else
	            {
	                prev->next = current->next;
	                if (list->last == current)
	                    list->last = prev;
	            }

	            removable = current;
	            current = current->next;
	            free(removable);
	            no_del_elem++;
	        }
	        else
	        {
	            prev = current;
	            current = current->next;
	        }
	    }
	    return no_del_elem;
	}

int clear(struct List *list)
{
    struct Element* current;
    if (list->first == NULL)
        return 1;
    current = list->first;

    while(current)
    {
        list->first = current->next;
        free(current);
        current = list->first;
    }
    init(list);
    return 1;
}

int forall(struct List *list, ItemFunction exec)
{
    struct Element* current;
    int no_of_execs = 0;
      if (list->first == NULL)
        return 0;
    for(current = list->first; current != NULL; current = current->next)
        no_of_execs += exec(current);
    return no_of_execs;
}

 int printItem(struct Element* element){
	return printf("Datum: %s Produktionswert: %i\n", element->datum, element->tagesproduktion);
}
void print(struct List *list){
	int n;
	    printf("The list contains:\n");
	    n = forall(list, printItem);
	    printf("Total of %d item%s.\n", n, (n==1)? "" : "s");
}

int empty(struct List *list){
	if(list == NULL){
		return -1;
	}
	 if (list->first == NULL)
	        return 1;
	 else{
		 return 0;
	 }
}

int compare(struct Element *elem1, struct Element *elem2){
	if(elem1->tagesproduktion == elem2->tagesproduktion){
		return 0;
	}else if(elem1->tagesproduktion < elem2->tagesproduktion){
		return -1;
	}else{
		return 1;
	}
}
int removeMaximum(struct List *list){
	if(~empty(list)){
	struct Element* max;
	struct Element* current;
	current = list -> first;
	max = list -> first;

	while(current != NULL){
		if(compare(max,current)== -1){
			max = current;
		}
		current = current -> next;
	}

	removeElements(list, max->tagesproduktion);

	return max->tagesproduktion;
	}else{
		return 0;
	}
}


