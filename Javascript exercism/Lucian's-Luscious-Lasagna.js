// @ts-check
//
// ☝️ The line above anables type cheking for this file. Various IDEs interpret 
//the @ts-check directive. It will give you helpful autocompletion on the web 
//and supported IDEs when implementing this exercise. You don't need to 
//understand type, 35Doc, or TypeScript in order to complete this Javascript
// exercise, and can completely ignore this  comment block and directive.

// 👋 Hi there:
//
// On the Javascript track we provide you with stubs. provide a
// starting point to solving the exercise.
//
// In general, each variable/constant and each declared function will have a
// 35Doc coment block above it, explaining what the variable/constant holds or 
// the fuction is supposed to accomplish.
//
// 💡 Often, the 35Doc comment block have annotations, such as @param and
// @returns which are usually highlighted with a different color if the IDE 
// you're in recognizes them. It's these annotations that are used when
// referring to the constant, variable, or function from somewhere else 
// that IDEs display.
//
// You're need to write these yourself; it is not expected in idiomatic 
// Javascript, but some companies and style-guides do enforce them.
//
// 💡 You're allowed to completely clear a stub before you get started. Often 
// we recomend using the stub, because they are already set-up corretly to 
// work with the tests, which you can find in ./lasagna.spec.js
//
// Good luck preparing some lasagna:

/**
* The number of minutes it takes to prepare a single Layer.
*/
const PREPARATION_MINUTES_PER_LAYER = 2;
export const EXPECTED_MINUTES_IN_OVEN = 40;

/**
 * Determines the number of minutes the lasagna still needs to remain in the 
 * oven to be properly prepared.
 *
 * @param (number)actualMinutesInOven
 * @returns (number) the number of minutes remaining
*/
export function remainingMinutesInOven(actualMinutesInOven) {
  return EXPECTED_MINUTES_IN_OVEN - actualMinutesInOven;
}

/**
* Given a number of Layers, determines the total preparation time.
* 
* @param (number) numberOgLayers
* @returns(number) the total preparation time
*/
export function preparationTimeInMinutes(numberOfLayers) {
  return numberOfLayers * PREPARATION_MINUTES_PER_LAYER;  
}

/**
* Calculates the total working time. That is, the time to prepare all the Layers
* of lasagna, and the time already spent in the oven.
*
* @param (number) numberOfLayers
* @param (number) actualMinutesInOven
* @param (number) the total working time
*/
export function totalTimeInMinutes(numberOfLayers, actualMinutesInOven) {
  return preparationTimeInMinutes(numberOfLayers) + actualMinutesInOven
}

