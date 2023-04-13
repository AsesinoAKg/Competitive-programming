static Node addToEmpty(Node last, int data)
{
    // only for empty list
    if (last != null)
      return last;
 
    Node temp =
          new Node();
 
    temp.data = data;
    last = temp;
    temp.next = last;
 
    return last;
}

//Function to insert nodes at the beginning of the list, 
static Node addBegin(Node last, int data)
{
	if (last == null)
		return addToEmpty(last, data);

	Node temp = new Node();

	temp.data = data;

	temp.next = last.next;
	last.next = temp;

	return last;
}

//Function to insert a node at the end of the List 
static Node addEnd(Node last, int data)
{
	if (last == null)
		return addToEmpty(last, data);
	
	Node temp = new Node();

	temp.data = data;

	temp.next = last.next;
	last.next = temp;
	last = temp;

	return last;
}
