class Entity
{
};

void foo()
{
	// allocate memory on the heap
	Entity* e = new Entity();
	int* i = new int[50];

	// free memory 
	delete e;
	delete[] i;
}