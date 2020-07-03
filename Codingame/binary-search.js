function binarySearch(items, value, start, end) {
  if (start > end) return -1;

  const mid = Math.floor((start + end) / 2);
  if (items[mid] === value) return mid;

  if (items[mid] > value) {
    return binarySearch(items, value, start, mid - 1);
  } else {
    return binarySearch(items, value, mid + 1, end);
  }
}

function binarySearchIt(items, value) {
  let start = 0;
  let end = items.length - 1;

  while (start <= end) {
    const mid = Math.floor((start + end) / 2);

    if (items[mid] === value) return mid;
    else if (items[mid] > value) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return -1;
}

function main() {
  const arr = [1, 3, 5, 7, 8, 9];
  let x = 5;

  console.log(binarySearch(arr, x, 0, arr.length - 1)); // 2
  console.log(binarySearchIt(arr, x)); // 2

  x = 6;

  console.log(binarySearch(arr, x, 0, arr.length - 1)); // -1
  console.log(binarySearchIt(arr, x)); // -1
}

main();
