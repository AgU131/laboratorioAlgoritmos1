  --notas de la Clase 2 de Algoritmos Online (vieo del aula virtual en drive)

{- 
-> Operadores en haskell: 
mod x 2 (si es par da 0 si no da 1).   
-> para poner un operador en un orden dir=ferendte, por ej x 'mod' 2, debo ponerle estas comillas simples ' '.
->

-}

par :: Int -> Bool			
par x = mod x 2 == 0


ejClase :: [Int] -> Bool
ejClase [] = False
ejClase (x:xs) = par x || ejClase xs




