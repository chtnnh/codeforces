faces = 0
for i in range(int(input())):
    shape = input()
    if (shape == 'Tetrahedron'):
        faces += 4
    elif (shape == 'Cube'):
        faces += 6
    elif (shape == 'Octahedron'):
        faces += 8
    elif (shape == 'Dodecahedron'):
        faces += 12
    elif (shape == 'Icosahedron'):
        faces += 20
print(faces)
