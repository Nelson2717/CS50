from PIL import Image, ImageFilter

before = Image.open("lion.jpg")
after = before.filter(ImageFilter.BoxBlur(100))
after.save("blur_lion.jpg")

# The above code uses the Python Imaging Library (PIL) to apply a box blur filter to an image.
# It opens an image file named "lion.jpg", applies a blur effect with a radius of 100,
# and saves the resulting image as "blur_lion.jpg".
# The code demonstrates how to manipulate images using PIL, specifically applying a blur effect.