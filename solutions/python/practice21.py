# Problem: Smallest Multiple That is Even
# Source: https://leetcode.com/problems/smallest-even-multiple/
# Note: Solves the Smallest Multiple That is Even problem
# Description:
# Given a positive integer n, find the smallest multiple of n that is even. If n is already even,
# return n. If n is odd, return n * 2.
# 
# Example:
# - Input: n = 4 → Output: 4 (already even)
# - Input: n = 7 → Output: 14 (7 * 2 = 14, which is even)
# 
# Status: ✅ SOLVED

def smallest_even_multiple(n):
    """Return the smallest even multiple of the given positive integer."""
    if n <= 0:
        return 0
    
    if n % 2 == 0:
        return n
    else:
        return n * 2
