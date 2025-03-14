from PIL import Image, ImageFilter

before = Image.open("LA.jpg")
after = before.filter(ImageFilter.BoxBlur(100))
after.save("out.jpg")