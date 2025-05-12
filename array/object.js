// let person = {
//   name: "Ali",
//   age: 21,
//   city: "Islamabad",  
//   class:
//   {deg:"BS" ,sub:"CS ", sem: 6 }
// };

// for (let k in person) {
//   console.log(k + " => " + person[k]);
// }

// let student1 = {
//   name: "Zara",
//   age: 20,
//   marks: [85, 90, 78],
//   displayInfo: function() {
//     console.log("Name:", this.name);
//     console.log("Age:", this.age);
//     console.log("Marks:", this.marks);
//   }
// };

// student1.displayInfo();

// let student = {
//   name: "Zara",
//   age: 20,
//   marks: [85, 90, 78],
//   displayInfo: function() {
//     console.log("Name:", this.name);
//     console.log("Age:", this.age);
//     console.log("Marks:", this.marks.join(", "));
//   }
// };

// student.displayInfo();


// function greet(name, callback) {
//   console.log("Hello " + name);
//   callback(name); // call the passed function
// }


// function sayBye1(name) {
//   console.log( name + "  Goodbye!");
// }



// greet("Ali", sayBye1);
                                //  arrrow function 
// let fun=() =>{
//   return 5;
// }
// console.log(fun());


// let fun= (a ,b) =>  a*5*b;  // we can also do it without return keywork
// console.log(fun(2,6));
//  a=[23 ,34,55];
//  console.log(a);


// arrDays = [“Monday”, “Tuesday”];
// // print “Monday” to the page
// document.write(arrDays[0]);

// arrDays = new Array();
// arrDays[“Monday”] = “Go to the dentist”;
// arrDays[“Tuesday”] = “Attend JavaScript
// class”;
// arrDays[“Wednesday”] = “JavaScript homework”;
// // remind you of Wednesday’s task
// alert(arrDays[“Wednesday”]);



window.onload = () => {
  let body_tag = document.querySelector('body');

  let div_tag = document.createElement('div');
  div_tag.setAttribute('id', 'div');
  div_tag.textContent = 'hello';
  body_tag.appendChild(div_tag);

  let h_tag = document.createElement('h1');
  h_tag.textContent = 'heading';
  div_tag.appendChild(h_tag);

  let p_tag = document.createElement('p');
  p_tag.textContent = 'this is paragraph';
  p_tag.setAttribute('id', 'pp');
  div_tag.appendChild(p_tag);

  let world = document.createTextNode('world');
  div_tag.appendChild(world);

  let temp = document.createElement('img');
  let pp = document.querySelector('#pp');

  div_tag.insertBefore(temp, pp);
};