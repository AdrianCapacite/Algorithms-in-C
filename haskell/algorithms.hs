{-
  Haskell algorithms - algorithms

  1. factorial
  2. fibonacci
  3. gcd -- ignore for now, too complicated


  Author: Adrian Thomas Capacite
  Date: 10 / 05 / 2022
-}

-- 1. factorial
fact :: Integer -> Integer
fact 0 = 1
fact n = n * fact (n - 1)

-- 2. fibonacci
fib :: Integer -> Integer
fib 0 = 0
fib 1 = 1
fib n = fib (n - 1) + fib (n - 2)

-- 3. gcd
gcd' :: Integer -> Integer -> Integer
gcd' a b
  | b == 0 = a
  | otherwise = gcd' b (a `mod` b)

-- 4. lcm
lcm' :: Integer -> Integer -> Integer
lcm' a b = a * b `div` gcd' a b

-- 5. prime
prime :: Integer -> Bool
prime n
  | n < 2 = False
  | otherwise = all (\x -> n `mod` x /= 0) [2..(n - 1)]

-- main
main :: IO ()
main = do
  -- call factorial
  let x = fact 10
  putStrLn $ "factorial of 5: " ++ show x
