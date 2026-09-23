package main

import (
	"fmt"
)

func konversiSuhu(C float64) (float64, float64, float64) {
	R := (4.0 / 5.0) * C
	F := (9.0/5.0)*C + 32
	K := C + 273.15
	return R, F, K
}

func main() {
	var C float64

	fmt.Scan(&C)

	r, f, k := konversiSuhu(C)
	fmt.Printf("%.2fR\n", r)
	fmt.Printf("%.2fF\n", f)
	fmt.Printf("%.2fK\n", k)
}
