from PIL import Image, ImageFilter

before = Image.open("lion.jpg")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("edge_lion.jpg")

# The above code uses the Python Imaging Library (PIL) to apply an edge detection filter to an image.
# It opens an image file named "lion.jpg", applies an edge detection effect,
# and saves the resulting image as "edge_lion.jpg".
# The code demonstrates how to manipulate images using PIL, specifically applying an edge detection effect.
# This is useful for highlighting the outlines and contours in the image.
# The edge detection filter can be used in various applications, such as image processing,
# computer vision, and graphic design.
# The code is straightforward and effectively demonstrates the use of PIL for image manipulation.
# The `ImageFilter` module provides various filters that can be applied to images,
# allowing for creative effects and enhancements.
# The `FIND_EDGES` filter is particularly useful for detecting edges in images,
# which can be helpful in various image analysis tasks.
# The code is simple and easy to understand, making it accessible for beginners in image processing.