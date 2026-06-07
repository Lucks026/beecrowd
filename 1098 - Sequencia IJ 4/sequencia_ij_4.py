for step in range(11):
    i = step * 0.2
    for k in range(3):
        j = 1 + i + k
        if step % 5 == 0:
            print(f"I={int(round(i))} J={int(round(j))}")
        else:
            print(f"I={i:.1f} J={j:.1f}")
