import React, { useState } from "react";
import { evaluate } from "mathjs";
function Calculator() {
  const [expression, setExpression] = useState("");
  const input = (value) => {
    let newExpression = expression + value;
    setExpression(newExpression);
  };
  const blank = () => {
    setExpression("");
  };
  const calculate = () => {
    let result = evaluate(expression);
    let newExpression = expression + "\n" + result;
    setExpression(newExpression);
  };
  return (
    <div>
      <div>
        <textarea name="" value={expression} cols="20" rows="5"></textarea>
      </div>
      <div>
        <span onClick={() => input("1")}> 1 </span>
        <span onClick={() => input("2")}> 2 </span>
        <span onClick={() => input("3")}> 3 </span>
      </div>
      <div>
        <span onClick={() => input("4")}> 4 </span>
        <span onClick={() => input("5")}> 5 </span>
        <span onClick={() => input("6")}> 6 </span>
      </div>
      <div>
        <span onClick={() => input("7")}> 7 </span>
        <span onClick={() => input("8")}> 8 </span>
        <span onClick={() => input("9")}> 9 </span>
      </div>
      <div>
        <span onClick={() => input("0")}> 0 </span>
        <span onClick={() => input("+")}> + </span>
        <span onClick={() => input("-")}> - </span>
      </div>
      <div>
        <span onClick={() => input("*")}> * </span>
        <span onClick={() => input("/")}> / </span>
        <span onClick={() => input("%")}> % </span>
      </div>
      <div>
        <span onClick={blank}> Clear </span>
        <span onClick={calculate}> = </span>
      </div>
    </div>
  );
}
export default Calculator;
