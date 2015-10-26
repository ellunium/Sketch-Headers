#import "MSEventHandler.h"

@class MSTextLayer;

@interface MSInsertTextEventHandler : MSEventHandler
{
    struct CGPoint mouseDownPoint;
    struct CGPoint mouseDraggedPoint;
    MSTextLayer *_textLayer;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MSTextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (void).cxx_destruct;
- (BOOL)shouldDrawLayerSelection;
- (id)toolbarIdentifier;
- (struct CGRect)rectForInsertingDirectly:(struct CGPoint)arg1;
- (void)selectTextLayerAndEdit:(id)arg1;
- (id)textLayerUnderMouse:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)tryToEditExistingTextLayer:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (id)groupForInserting;
- (id)textLayerWithRect:(struct CGRect)arg1 type:(long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)drawInRect:(struct CGRect)arg1;
- (void)refresh;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (BOOL)mouseMovedEvent:(id)arg1;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;

@end

