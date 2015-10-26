#import "MSDragRectEventHandler.h"

@class MSShapePathLayer, NSArray, NSCursor, NSMutableArray;

@interface MSInsertShapeEventHandler : MSDragRectEventHandler
{
    NSMutableArray *insertedShapes;
    NSCursor *shapeCursor;
    MSShapePathLayer *_prototypeLayer;
    NSArray *_snapLines;
}

@property(retain, nonatomic) NSArray *snapLines; // @synthesize snapLines=_snapLines;
@property(retain, nonatomic) MSShapePathLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;
- (void).cxx_destruct;
- (void)flagsChanged:(id)arg1;
- (void)dealloc;
- (void)drawRectPreview;
- (void)drawInRect:(struct CGRect)arg1;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (id)insertShapeAsNewLayer:(struct CGRect)arg1;
- (id)insertShapeAsSubPathOfShape:(id)arg1 inRect:(struct CGRect)arg2;
- (id)parentShapeForInsertingSubPath;
- (id)performActionWithRect:(struct CGRect)arg1;
- (id)imageName;
- (void)handlerWillLoseFocus;
- (struct CGPoint)snapMouseToEdges:(struct CGPoint)arg1 guides:(id *)arg2;
- (struct CGPoint)snapMouseAndShowSnapLines:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)selectAppropriateToolbarItem;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

