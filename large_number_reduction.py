import math

def test_theory(n):
    left_side = 2 ** n
    right_side = 2 ** (n / 4)
    
    print(f"Testing n = {n}")
    print(f"Left side (2^n): {left_side}")
    print(f"Right side (2^(n/4)): {right_side}")
    
    if left_side < right_side:
        print("The theory holds: 2^n < 2^(n/4)")
    else:
        print("The theory does NOT hold: 2^n >= 2^(n/4)")

# Test for a range of n values
for n in range(1, 21):
    test_theory(n)
    print("-" * 40)
