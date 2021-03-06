/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:12:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, UIPDFAnnotationView, UIPDFAnnotationController, NSMutableArray, CALayer, UIPDFSelection, UIPDFPopupAnnotation, UIPDFPage;

@interface UIPDFAnnotation : NSObject {

	CGPDFDictionaryRef _dictionary;
	CGColorRef _color;
	void* _appearanceStream;
	CGPDFStringRef _pdfContents;
	NSString* _annotationID;
	char _hidden;
	UIPDFAnnotationView* _annotationView;
	UIPDFAnnotationController* _annotationController;
	NSMutableArray* _quadPoints;
	CALayer* _drawingLayer;
	UIPDFSelection* _selection;
	char editable;
	id data;
	NSString* _contents;
	int _index;
	UIPDFPopupAnnotation* _popup;
	NSString* _associatedAnnotationID;
	UIPDFPage* _page;
	unsigned _tag;

}

@property (nonatomic,retain) CALayer * drawingLayer;                                        //@synthesize drawingLayer=_drawingLayer - In the implementation block
@property (nonatomic,retain) UIPDFAnnotationView * annotationView;                          //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) UIPDFPage * page;                                              //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) UIPDFAnnotationController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
@property (nonatomic,readonly) char recognizeGestures; 
@property (assign,nonatomic) char editable; 
@property (assign,nonatomic) UIPDFSelection * selection; 
@property (nonatomic,retain) id data; 
@property (nonatomic,retain) NSString * contents;                                           //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) int index;                                                     //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) UIPDFPopupAnnotation * popup;                                  //@synthesize popup=_popup - In the implementation block
@property (nonatomic,retain) NSString * associatedAnnotationID;                             //@synthesize associatedAnnotationID=_associatedAnnotationID - In the implementation block
@property (assign,nonatomic) unsigned tag;                                                  //@synthesize tag=_tag - In the implementation block
+(id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2 ;
-(void)setAnnotationView:(UIPDFAnnotationView *)arg1 ;
-(UIPDFAnnotationView *)annotationView;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(CGRect)frame;
-(char)containsPoint:(CGPoint)arg1 ;
-(id)data;
-(void)setData:(id)arg1 ;
-(NSString *)contents;
-(unsigned)tag;
-(void)setTag:(unsigned)arg1 ;
-(void)setContents:(NSString *)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(UIPDFSelection *)selection;
-(void)setSelection:(UIPDFSelection *)arg1 ;
-(void)setEditable:(char)arg1 ;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(int)index;
-(char)editable;
-(UIPDFPage *)page;
-(void)setPage:(UIPDFPage *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(Class)viewClass;
-(UIPDFAnnotationController *)annotationController;
-(CGRect)Rect;
-(void)setIndex:(int)arg1 ;
-(void)setPopup:(UIPDFPopupAnnotation *)arg1 ;
-(UIPDFPopupAnnotation *)popup;
-(void)setPageView:(id)arg1 ;
-(void)setAnnotationID:(id)arg1 ;
-(void)setAssociatedAnnotationID:(NSString *)arg1 ;
-(void)setDrawingLayer:(CALayer *)arg1 ;
-(id)newSelection;
-(id)annotationID;
-(CGRect)rectIn:(CGPDFArrayRef)arg1 ;
-(void)makeQuadpointsFrom:(id)arg1 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
-(id)getImageNamed:(id)arg1 ofType:(id)arg2 ;
-(char)hasPopUp;
-(const char*)pdfContents;
-(CGRect)popUpAnnotationRect;
-(id)descriptionHOLD;
-(void)setAnnotationController:(UIPDFAnnotationController *)arg1 ;
-(NSString *)associatedAnnotationID;
-(CGPathRef)newPathFromQuadPoints;
-(char)recognizeGestures;
-(CALayer *)drawingLayer;
-(int)annotationType;
-(char)hidden;
-(id)archive;
@end

