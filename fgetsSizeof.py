// Copyright 2023-2025 Mitchell E Wise
// SPDX-License-Identifier: Apache-20


def fgets_sizeof():
    t = ["fgets(",",","sizeof(","),stdin);","[strcspn(",'"\\n"',")]=0;","[strlen(", ")-1] = '\\0';","while(","      ","),stdin)) {"]
    while True:
        print("//Enter name of variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("\n" + t[0] + name + t[1] + t[2] +name + t[3])
        print(name + t[4] +  name  + t[1] +  t[5] + t[6] + "\n")
        print("\n" +t[9] + t[0] + name + t[1] + t[2] + name + t[11])
        print(t[10] + name + t[4] +  name  + t[1] +  t[5] + t[6] + "\n")
        print("\n" + t[0] + name + t[1] + t[2] + name + t[3])
        print(name + t[7] + name + t[8] + "\n")

fgets_sizeof()
