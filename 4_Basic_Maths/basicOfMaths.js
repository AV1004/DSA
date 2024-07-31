const prompt = require("prompt-sync")({ sigint: true });

const extractionOfDigitsFromNumber = (num) => {
  let n = num;
  const arr = [];
  //   Reverse orderd
  //   while (n > 0) {
  //     const lastDigit = Math.floor(n % 10);
  //     arr.push(lastDigit);
  //     n = Math.floor(n / 10);
  //   }

  //   console.log(arr);

  // Ordered
  while (n > 0) {
    const lastDigit = Math.floor(n % 10);
    arr.unshift(lastDigit);
    n = Math.floor(n / 10);
  }

  console.log(arr);
};

const n = prompt("Enter number to extract digits from it: ");
extractionOfDigitsFromNumber(n);
