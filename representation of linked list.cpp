struct snode  //single linked list
{
	int data;
	struct snode *p;//self referential pointer;
};

struct dnode  //double linked list
{
	struct dnode *p; //self referential pointer;
	int data;
	struct dnode *n; //self referential pointer;
};
