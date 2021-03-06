/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, UIImage, NSData;

@interface UIKBRenderer : NSObject {

	CGContextRef _cachingContext;
	/*^block*/ id _cachingContextCompletion;
	bool _opaque;
	bool _containsRGBContent;
	CGContextRef _ctx;
	double _scale;
	long long _renderFlags;
	NSString* _cacheKey;
	UIImage* _renderedImage;
	CGSize _size;

}

@property (nonatomic,readonly) CGContextRef context;                 //@synthesize ctx=_ctx - In the implementation block
@property (nonatomic,readonly) NSData * contextData; 
@property (nonatomic,readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                         //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) bool opaque;                          //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,readonly) long long renderFlags;                //@synthesize renderFlags=_renderFlags - In the implementation block
@property (nonatomic,readonly) UIImage * renderedImage;              //@synthesize renderedImage=_renderedImage - In the implementation block
@property (nonatomic,readonly) bool containsRGBContent;              //@synthesize containsRGBContent=_containsRGBContent - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                    //@synthesize cacheKey=_cacheKey - In the implementation block
+(id)rendererWithContext:(CGContextRef)arg1 withSize:(CGSize)arg2 withScale:(double)arg3 opaque:(bool)arg4 renderFlags:(long long)arg5 ;
+(void)clearInternalCaches;
+(CGContextRef)imageContextWithSize:(CGSize)arg1 scale:(double)arg2 opaque:(bool)arg3 invert:(bool)arg4 ;
-(void)dealloc;
-(CGSize)size;
-(double)scale;
-(CGContextRef)context;
-(void)renderKeyContents:(id)arg1 withTraits:(id)arg2 ;
-(bool)opaque;
-(void)renderBackgroundTraits:(id)arg1 ;
-(id)cacheKey;
-(bool)loadCachedImageForHashString:(id)arg1 ;
-(id)renderedImage;
-(id)contextData;
-(void)setCacheKey:(id)arg1 ;
-(long long)renderFlags;
-(bool)containsRGBContent;
-(void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2 ;
-(void)renderShadowEffect:(id)arg1 withTraits:(id)arg2 ;
-(id)initWithContext:(CGContextRef)arg1 withSize:(CGSize)arg2 withScale:(double)arg3 opaque:(bool)arg4 renderFlags:(long long)arg5 ;
-(void)ensureContext;
-(CGColorRef)_validColorForColor:(CGColorRef)arg1 ;
-(void)addPathForTraits:(id)arg1 displayRect:(CGRect*)arg2 ;
-(void)addRoundRect:(CGRect)arg1 radius:(double)arg2 corners:(unsigned long long)arg3 ;
-(void)addPathForRenderGeometry:(id)arg1 ;
-(void)_drawLinearGradient:(id)arg1 inRect:(CGRect)arg2 ;
-(CGContextRef)_contextForCacheImageSize:(CGSize)arg1 ;
-(void)_completeCacheImageWithTraitsIfNecessary:(id)arg1 ;
-(void)renderBackgroundTraits:(id)arg1 allowCaching:(bool)arg2 ;
-(bool)renderKeyImageContents:(id)arg1 withTraits:(id)arg2 ;
-(bool)renderKeyStringContents:(id)arg1 withTraits:(id)arg2 ;
-(bool)renderKeyPathContents:(id)arg1 withTraits:(id)arg2 ;
-(void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2 ;
-(void)_drawKeyImage:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 force1xImages:(bool)arg4 ;
-(bool)_drawSingleSymbol:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(bool)_drawKeyString:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(CGPathRef)_thickShiftGlyphPath;
-(CGPathRef)_thinShiftGlyphPath;
-(CGPathRef)_deleteGlyphPaths;
-(void)drawPath:(CGPathRef)arg1 weight:(double)arg2 transform:(CGAffineTransform)arg3 color:(CGColorRef)arg4 fill:(bool)arg5 ;
-(void)drawShiftPath:(bool)arg1 weight:(double)arg2 transform:(CGAffineTransform)arg3 color:(CGColorRef)arg4 ;
-(void)addPathForFlickPopupGeometries:(id)arg1 ;
-(void)addPathForFlickGeometry:(id)arg1 ;
-(void)addPathForSplitGeometry:(id)arg1 ;
-(id)pathForRenderGeometry:(id)arg1 ;
-(id)pathForFlickGeometry:(id)arg1 ;
-(id)pathForFlickPopupGeometries:(id)arg1 ;
-(id)pathForSplitGeometry:(id)arg1 ;
@end

