package main

import (
    "fmt"
    "math"
)

func testTheory(n int) {
    leftSide := math.Pow(2, float64(n))
    rightSide := math.Pow(2, float64(n)/4)

    fmt.Printf("Testing n = %d\n", n)
    fmt.Printf("Left side (2^n): %f\n", leftSide)
    fmt.Printf("Right side (2^(n/4)): %f\n", rightSide)

    if leftSide < rightSide {
        fmt.Println("The theory holds: 2^n < 2^(n/4)")
    } else {
        fmt.Println("The theory does NOT hold: 2^n >= 2^(n/4)")
    }
    fmt.Println("----------------------------------------")
}

func main() {
    for n := 1; n <= 20; n++ {
        testTheory(n)
    }
}
