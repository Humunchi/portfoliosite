/*Rehumile Biagini 1st JS 
 */

console.log('Hello World!'); // I watched a youtube video that said this is how to print hello world w/o css and html


const myHeading = document.querySelector('h1'); //Moz dev said this will change the text myHeading into hello world
myHeading.textContent = 'Hello world!';
/*
language basics crash course


    !--{{Variables}}--!
    let myVariable; (declare)
    myVariable = 'Rehumile'; (assign value)
    
 or

    let myVariable = 'Rehumile'; (declare and assign in one line)

    myVariable; (retrieve)

    let myVariable = 'Rehumile';
    myVariable = 'Neo"; (change value of variable)

 Data types:
 string- text in quotes let myVariable = "Rehumile"; 
 number- no quotes  let myVariable
 boolean- true or false w/o quotation marks
 array- many values in one reference
 object- anything and everying in js can be stored in a variable


    !--{{Operators}}--!
    + concatenate strings/ add two numbers
  /*- do what they do divide, multiply and subtract
  = assignment
  ===equality returns bool
  ! or !== not equal 
(don't mix data types)


    !--{{Conditionals}}--!
 if...else
    let iceCream = 'vegan';
    if(iceCream === 'vegan'){
        alert('Yay, I love vegan ice cream!');
    } else {
        alert('Aww, cows were harmed in the production of this ice cream');
    }

    !--{{Functions}}--!
reuse recycle code eg:
    alert('hi');
or            
    let myVariable = document.querySelector('h1');
built into broswer

and
    function multiply(num1,num2){           ---------->funtion built to return product of num1 and num2
        let result = num1 * num2;
        return result;
    }
    !--{{Events}}--!

*/

// I would like to animate my webpage
