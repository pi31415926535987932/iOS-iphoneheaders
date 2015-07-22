/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class DOMDocument, DOMNode, NSMutableArray, NSArray, DOMRange;

@interface MFMessageReformattingContext : NSObject {

	DOMDocument* _document;
	DOMNode* _body;
	NSMutableArray* _changes;
	double _maximumWidth;
	double _meanWidth;
	double _widthDeviation;
	BOOL _hasAnyLeftFloat;
	NSArray* _rightFloats;
	BOOL _floatsNeedUpdate;
	BOOL _metricsNeedUpdate;
	BOOL _documentContainsAnyWebKitTransform;
	double _minimumRescalingFactor;
	DOMRange* _firstTextRange;

}

@property (nonatomic,readonly) BOOL hasAnyLeftFloat; 
@property (nonatomic,readonly) BOOL hasAnyRightFloat; 
@property (nonatomic,copy,readonly) NSArray * rightFloats; 
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,readonly) double meanWidth; 
@property (nonatomic,readonly) double widthDeviation; 
@property (assign,nonatomic) double minimumRescalingFactor;              //@synthesize minimumRescalingFactor=_minimumRescalingFactor - In the implementation block
@property (nonatomic,readonly) DOMDocument * document; 
@property (nonatomic,readonly) DOMNode * body; 
@property (nonatomic,readonly) BOOL didChangeDocument; 
@property (nonatomic,retain) DOMRange * firstTextRange;                  //@synthesize firstTextRange=_firstTextRange - In the implementation block
-(double)minimumRescalingFactor;
-(BOOL)hasAnyRightFloat;
-(void)rollBackLastChangeForElement:(id)arg1 ;
-(void)rollBackAllChanges;
-(BOOL)didChangeDocument;
-(double)widthDeviation;
-(double)meanWidth;
-(BOOL)hasAnyLeftFloat;
-(NSArray *)rightFloats;
-(CGRect)boundingBoxOf:(id)arg1 ;
-(BOOL)rescaleElement:(id)arg1 withScale:(double)arg2 ;
-(DOMRange *)firstTextRange;
-(void)setFirstTextRange:(DOMRange *)arg1 ;
-(BOOL)resizeElement:(id)arg1 withScale:(double)arg2 verificationBlock:(/*^block*/id)arg3 ;
-(void)setMinimumRescalingFactor:(double)arg1 ;
-(void)_updateFloatsIfNecessary;
-(void)_updateMetricsIfNecessary;
-(BOOL)changeSizeOfElement:(id)arg1 priority:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)changeProprety:(id)arg1 ofElement:(id)arg2 toValue:(id)arg3 priority:(id)arg4 ;
-(BOOL)changeMarginOfElement:(id)arg1 priority:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_rollBackChange:(id)arg1 ;
-(void)dealloc;
-(double)maximumWidth;
-(DOMNode *)body;
-(DOMDocument *)document;
-(id)initWithDocument:(id)arg1 ;
@end
