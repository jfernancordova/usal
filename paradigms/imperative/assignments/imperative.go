package main

import "fmt"

func main() {

	numbers := [7]int{1, 2, 3, 4, 5, 6, 7}
	sum := 0
	min := 999999

	for _, number := range numbers {

		sum += number

		if min > number {
			min = number
		}

	}

	//Sum
	fmt.Println("The sum is", sum)

	//Average
	prom := sum / len(numbers)
	fmt.Println("The average is", prom)

	//Min
	fmt.Println("The min value is", min)

}
