/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {

	NSMutableArray* _keys;
	NSMutableDictionary* _keyValues;

}
-(void)_setupFrom:(id)arg1 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)allKeys;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)copy;
-(void)removeAllObjects;
-(id)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allValues;
-(id)keys;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
