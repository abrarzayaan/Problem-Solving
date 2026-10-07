# 4A- Codeforces - A. Watermelon
inputWeight: int = int (input("Input the A. Watermelon Weight: "))
devidedWeight = inputWeight / 2

if (inputWeight > 0 and inputWeight < 101):
    if (devidedWeight % 2 == 0):
        print("YES")
    else:
        print("NO")
else:
    print("the inputWeight range must between 0<w<100")
