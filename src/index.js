function secondLargesNumber(numbers) {
  let first = numbers[0];
  let second = 0;
  for (let i = 0; i < unmbers.length; i++) {
    if (numbers[i] > first) {
      second = first;
      first = numers[i];
    }
    if (numbers[i] > second && numbers[i] < first) {
      second = numbers[i];
    }
  }
  return second;
}

let nums = [8, 4, 6, 10, 9, 11, 20];
console.log(secondLargestNumber(nums));

