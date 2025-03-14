from PIL import Image, ImageFilter

before = Image.open("lion.jpg")
after = before.filter(ImageFilter.BoxBlur(100))
after.save("blur_lion.jpg")