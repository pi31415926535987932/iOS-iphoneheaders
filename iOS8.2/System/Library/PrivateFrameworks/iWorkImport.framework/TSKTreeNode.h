/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSString, NSMutableArray;

@interface TSKTreeNode : TSPObject {

	NSString* mDisplayName;
	id mObject;
	NSMutableArray* mChildren;

}

@property (nonatomic,retain) id dataObject; 
@property (nonatomic,retain) NSMutableArray * children; 
@property (nonatomic,retain) NSString * name; 
-(void)setDataObject:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)enumerateAllChildrenWithBlock:(/*^block*/id)arg1 ;
-(id)nodeWithObject:(id)arg1 ;
-(int)indexOfNodeWithObject:(id)arg1 ;
-(char)hasChildWithName:(id)arg1 ;
-(void)addChildWithName:(id)arg1 object:(id)arg2 ;
-(void)addObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addNode:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeChildWithName:(id)arg1 ;
-(void)removeChildWithDataObject:(id)arg1 ;
-(id)nodeAtIndex:(unsigned)arg1 ;
-(void)removeChildAtIndex:(unsigned)arg1 ;
-(void)removeAllChildren;
-(void)dealloc;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithContext:(id)arg1 ;
-(id)dataObject;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)childEnumerator;
-(id)shallowCopy;
-(NSMutableArray *)children;
@end

