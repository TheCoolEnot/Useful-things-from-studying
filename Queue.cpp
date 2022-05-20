struct queue {
	int inf;
	queue* next;
};

void push(queue*& h, queue*& t, int x) {
	queue* r = new queue;
	r->inf = x;
	r->next = NULL;
	if (!h and !t) {
		h = t = r;
	}
	else {
		t->next = r;
		t = r;
	}
}

int pop(queue*& h, queue*& t) {
	int i = h->inf;
	queue* r = h;
	h = h->next;
	if (!h)
		t = NULL;
	delete r;
	return i;
}