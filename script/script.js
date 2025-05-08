let st="aaa";
 st=st+3;
 console.log(typeof(st));
const obj={
a:12,
"ali":"saad",
c:"hkk",
d:undefined


}
// you can also define an key outside the class
obj['f']="newww";   
// you can also reassign a value to key 
obj.ali=10;
console.log(obj)

 const prompt=require("prompt-sync")();
 let namess = prompt("Enter a string:");
 console.log(namess)



let userInput = prompt("Enter a string:");

let vovel = (st) => {
  let count = 0;
  // Loop through each character in the string
  for (let char of st) {
    // Check if the character is a vowel
    if (char === 'a' || char === 'e' || char === 'i' || char === 'o' || char === 'u' ||
        char === 'A' || char === 'E' || char === 'I' || char === 'O' || char === 'U') {
      count++;
    }
  }
  return count;
};

console.log("Vowel count: " + vovel(userInput)); // Output the result


const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
  });
  
  readline.question("Enter your name: ", function(name) {
    console.log("Hello, " + name);
    readline.close();
  });
  