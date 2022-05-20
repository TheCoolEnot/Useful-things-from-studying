struct list {
	int inf;
	list* next;
	list* prev;
};

void push(list*& h, list*& t, int x) {
	list* r = new list;
	r->inf = x;
	r->next = NULL;

	if (!h and !t) {
		r->prev = NULL;
		h = r;
	}
	else {
		t->next = r;
		r->prev = t;
	}

	t = r;
}

void print(list* h) {
	list* p = h;
	while (p) {
		cout << p->inf << " ";
		p = p->next;
	}
}

void del_node(list*& h, list*& t, list* r) {
	if (r == h and r == t)
		h = t = NULL;
	else if (r == h) {
		h = h->next;
		h->prev = NULL;
	}
	else if (r == t) {
		t = t->prev;
		t->next = NULL;
	}
	else {
		r->next->prev = r->prev;
		r->prev->next = r->next;
	}
	delete r;
}

int find_max(list* h, list* t) {
	list* p = h;
	int mx = p->inf;
	while (p) {
		if (p->inf > mx)
			mx = p->inf;
		p = p->next;
	}
	return mx;
}