  -- Resolucion del Practico 2 Laboratorio Algoritmos

--Ejercicio 1

--a) sum cuad.xs = ⟨Pi : 0 ≤ i < #xs : xs.i ∗ xs.i⟩
sum_cuad :: [Int] -> Int
sum_cuad [] = 0
sum_cuad (x:xs) = x + sum_cuad xs

--b) iga.e.xs = ⟨ ∀ i : 0 ≤ i < #xs : xs.i = e ⟩
iga :: Eq a => a -> [a] -> Bool
iga e [] = True 
iga e (x:xs) = e == x && iga e xs

--c) exp.x.n = x**n
{-
exp :: Int -> Int -> Int
exp x 0 = 1
exp x n = x * exp x (n-1)
-}
--d) sum par.n = ⟨Pi : 0 ≤ i ≤ n ∧ par.i : i⟩  donde par.i .= i mod 2 = 0.

--e) cu ́antos.p.xs = ⟨N i : 0 ≤ i < #xs : p.(xs.i)⟩

data Dia = Lunes | Martes | Miercoles | Jueves | Viernes | Sabado | Domingo
  deriving (Show, Eq, Ord)


