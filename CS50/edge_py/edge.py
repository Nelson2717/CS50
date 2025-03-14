from PIL import Image, ImageFilter

before = Image.open("lion.jpg")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("edge_lion.jpg")
