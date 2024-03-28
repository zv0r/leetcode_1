package main

import "fmt"

func main() {
	fmt.Println(twoSum([]int{-100, 109, 1, 2, 3}, 9))
	fmt.Println(twoSum([]int{3, 2, 4}, 6))
	fmt.Println(twoSum([]int{3, 3}, 6))
}

func twoSum(nums []int, target int) []int {
	var result []int = make([]int, 2)
	var positions map[int]int = make(map[int]int)

	for i := 0; i < len(nums); i++ {
		if _, ok := positions[target-nums[i]]; ok {
			result[0] = i
			result[1] = positions[target-nums[i]]
			break
		}
		positions[nums[i]] = i
	}

	return result
}
