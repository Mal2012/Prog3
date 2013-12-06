struct Element {

char datum[11];
unsigned tagesproduktion;
struct Element* next;

};

struct List {

struct Element* first;
struct Element* last;

};

typedef int (*ItemFunction) (struct Element*);

		void init(struct List *list);
		void insert(struct List *list, int val, char* dat);
		int removeElements(struct List* list, int val);
		int clear(struct List *list);
		int forall(struct List *list, ItemFunction exec);
		int printItem(struct Element* element);
		void print(struct List *list);
