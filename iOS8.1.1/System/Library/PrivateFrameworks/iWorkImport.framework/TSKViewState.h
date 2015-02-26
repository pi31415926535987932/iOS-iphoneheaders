/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSPObject;

@interface TSKViewState : TSPObject {

	TSPObject* _viewStateRoot;

}

@property (nonatomic,retain) TSPObject * viewStateRoot;              //@synthesize viewStateRoot=_viewStateRoot - In the implementation block
+(id)viewStateWithRoot:(id)arg1 context:(id)arg2 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setViewStateRoot:(TSPObject *)arg1 ;
-(id)initWithViewStateRoot:(id)arg1 context:(id)arg2 ;
-(TSPObject *)viewStateRoot;
-(void)dealloc;
@end
