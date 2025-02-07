package main

import "fmt"

func FindNonRepeatingElement(arr []int) int {
	for i := 1; i < len(arr); i += 2 {
		if arr[i] != arr[i-1] {
			return arr[i-1]
		}
	}

	if len(arr)%2 == 1 {
		return arr[len(arr)-1]
	}

	return -1
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		count := 0
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		vec := make([]int, count)
		fmt.Print("Please enter the array: ")
		for i := 0; i < count; i++ {
			fmt.Scan(&vec[i])
		}

		fmt.Printf("The non-repeating element is %d\n", FindNonRepeatingElement(vec))
	}
}
