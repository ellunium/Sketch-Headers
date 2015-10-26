#import "CHSheetController.h"

@class MSDocument, NSButton, NSImageView, NSTextField;

@interface MSMakeGridSheet : CHSheetController
{
    BOOL _isBoxed;
    BOOL _hasHorizontalPadding;
    BOOL _hasVerticalPadding;
    MSDocument *_doc;
    long long _numberOfRows;
    long long _numberOfColumns;
    long long _horizontalPadding;
    long long _verticalPadding;
    long long _boxedWidth;
    long long _boxedHeight;
    long long _shouldFillHoles;
    NSImageView *_imageView;
    NSTextField *_subtextField;
    NSButton *_confirmButton;
}

@property(nonatomic) __weak NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak NSTextField *subtextField; // @synthesize subtextField=_subtextField;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long shouldFillHoles; // @synthesize shouldFillHoles=_shouldFillHoles;
@property(nonatomic) long long boxedHeight; // @synthesize boxedHeight=_boxedHeight;
@property(nonatomic) long long boxedWidth; // @synthesize boxedWidth=_boxedWidth;
@property(nonatomic) long long verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) long long horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) BOOL hasVerticalPadding; // @synthesize hasVerticalPadding=_hasVerticalPadding;
@property(nonatomic) BOOL hasHorizontalPadding; // @synthesize hasHorizontalPadding=_hasHorizontalPadding;
@property(nonatomic) BOOL isBoxed; // @synthesize isBoxed=_isBoxed;
@property(retain, nonatomic) MSDocument *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (struct CGSize)defaultBoxSize;
- (unsigned long long)layerCount;
- (BOOL)layersHaveSameSize;
- (void)confirm:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)validatePaddingFields;
- (void)changeBoxedImage;
- (void)boxedAction:(id)arg1;
- (void)registerMarginDefaults;
- (void)awakeFromNib;

@end

