#include <iostream>

#define QUEUE_SIZE	5

class Queue{

private:
	int readIndex;
	int writeIndex;
	int numQueue[QUEUE_SIZE];

public:
	Queue()
		:readIndex(0), writeIndex(0) {};

public:
	bool enqueue(int data);
	bool dequeue(void);
	bool display(void);
	bool isQueueFull(void);
	bool isQueueEmpty(void);
};

int main()
{
	Queue myQueue;

	myQueue.enqueue(1);
	myQueue.enqueue(2);
	myQueue.enqueue(3);
	myQueue.enqueue(4);
	myQueue.enqueue(5);
	myQueue.enqueue(6);
	myQueue.display();

	return 0;
}

bool Queue::isQueueFull(void)
{
	if((writeIndex + 1) % QUEUE_SIZE == readIndex)
	{
		return true;
	}
	return false;
}

bool Queue::isQueueEmpty(void)
{
	if(readIndex == writeIndex)
	{
		return true;
	}

	return false;
}

bool Queue::enqueue(int data)
{
	if(isQueueFull())
	{
		std::cout << "Queue is full!" << std::endl;
		return false;
	}

	numQueue[writeIndex] = data;
	writeIndex = (writeIndex + 1) % QUEUE_SIZE;
	return true;
}

bool Queue::dequeue(void)
{
	if(isQueueEmpty())
	{
		std::cout << "Queue is empty!" << std::endl;
		return false;
	}

	std::cout << "Removed" << numQueue[readIndex] << "from queue!" << std::endl;
	
	readIndex = (readIndex + 1) % QUEUE_SIZE;
	return true;
}

bool Queue::display(void)
{
	int read = readIndex;

	while(read != writeIndex)
	{
		std::cout << "queue index:" << read
		<< ", data:" << numQueue[read] << std::endl;

		read = (read + 1) % QUEUE_SIZE;
	}

	return true;
}