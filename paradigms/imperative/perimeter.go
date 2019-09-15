package main

import (
	"fmt"
)

type geometry interface {
	perimeter() int
}

type triangle struct {
	a, b, c int
}

func (t triangle) perimeter() int {

	if t.a < 0 {
		fmt.Println("The first side must be positive")
		return -1
	}

	if t.b < 0 {
		fmt.Println("The second side must be positive")
		return -1
	}

	if t.c < 0 {
		fmt.Println("The third side must be positive")
		return -1
	}

	if (t.a + t.b) < t.c {
		fmt.Println("The total sum is not greater than the rest")
		return -1
	}

	return t.a + t.b + t.c
}

func main() {
	getPerimeter(triangle{a: 3, b: 4, c: 5})
}

func getPerimeter(g geometry) {
	fmt.Println(g)
	fmt.Printf("perimeter: %d \n", g.perimeter())
}
