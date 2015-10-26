#import "NSImage.h"

@interface NSImage (Chocolat)
- (BOOL)isVectorImage;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 fraction:(double)arg3 respectFlipped:(BOOL)arg4 colorSpace:(id)arg5;
- (id)bitSafeBitmapImageRep;
- (id)firstBitmapImageRep;
- (id)firstBitmapImageRepOrCreateIfNecessary;
- (void)drawFlippedAtPoint:(struct CGPoint)arg1;
- (id)altImage;
- (id)pressedImage;
- (id)hoverImage;
- (id)selectedImage;
- (void)drawProportionallyInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3;
- (id)scaledImageToSize:(struct CGSize)arg1;
- (void)drawInRect:(struct CGRect)arg1 fraction:(double)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 fraction:(double)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1;
@end

