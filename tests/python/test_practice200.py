import os
import sys
import unittest

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", "..", "solutions", "python"))

from practice200 import Solution  # noqa: E402


class GetFinalStateTest(unittest.TestCase):
    def setUp(self):
        self.sol = Solution()

    def test_examples(self):
        self.assertEqual(self.sol.getFinalState([1, 2, 3], 3, 10), [10, 20, 30])
        self.assertEqual(self.sol.getFinalState([1, 1, 1], 3, 10), [10, 10, 10])
        self.assertEqual(self.sol.getFinalState([1, 2, 3], 0, 10), [1, 2, 3])
        self.assertEqual(self.sol.getFinalState([2, 1, 3, 5, 6], 5, 2), [8, 4, 6, 5, 6])


if __name__ == "__main__":
    unittest.main()
