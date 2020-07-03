class QElement {
  constructor(element, priority) {
    this.element = element;
    this.priority = priority;
  }
}

class PriorityQueue {
  constructor() {
    this.items = [];
  }

  isEmpty() {
    return this.size() === 0;
  }

  size() {
    return this.items.length;
  }

  enqueue(element, priority) {
    const qElement = new QElement(element, priority);
    let contain = false;

    for (let i = 0; i < this.items.length; i++) {
      if (qElement.priority < this.items[i].priority) {
        this.items.splice(i, 0, qElement);
        contain = true;
        break;
      }
    }

    if (!contain) this.items.push(qElement);
  }

  dequeue() {
    if (this.isEmpty()) return "Underflow";

    return this.items.shift();
  }

  front() {
    if (this.isEmpty()) return "No elements in Queue";

    return this.items[0];
  }

  rear() {
    if (this.isEmpty()) return "No elements in Queue";

    return this.items[this.size() - 1];
  }

  printPQueue() {
    const elements = this.items.map((item) => item.element);
    return elements.join(" ");
  }
}

function main() {
  const priorityQueue = new PriorityQueue();

  console.log(priorityQueue.isEmpty()); // true
  console.log(priorityQueue.front()); // "No elements in Queue"

  priorityQueue.enqueue("Sumit", 2);
  priorityQueue.enqueue("Gourav", 1);
  priorityQueue.enqueue("Piyush", 1);
  priorityQueue.enqueue("Sunny", 2);
  priorityQueue.enqueue("Sheru", 3);

  console.log(priorityQueue.printPQueue()); // Gourav Piyush Sumit Sunny Sheru
  console.log(priorityQueue.front().element); // Gourav
  console.log(priorityQueue.rear().element); // Sheru

  console.log(priorityQueue.dequeue().element); // Gourav
  priorityQueue.enqueue("Sunil", 2);
  console.log(priorityQueue.printPQueue()); // Piyush Sumit Sunny Sunil Sheru
}

main();
