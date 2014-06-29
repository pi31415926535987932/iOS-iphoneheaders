/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying> {

	NSMutableArray* _components;
	NSString* _name;
	double _scale;
	int _emptyFields;
	long long _renderFlags;

}

@property (nonatomic,readonly) NSString * string; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int rowHint; 
@property (assign,nonatomic) int displayHint; 
@property (assign,nonatomic) long long renderFlags;              //@synthesize renderFlags=_renderFlags - In the implementation block
@property (assign,nonatomic) int emptyFields;                    //@synthesize emptyFields=_emptyFields - In the implementation block
@property (nonatomic,readonly) bool hasKey; 
+(id)tokenForKeyplane:(id)arg1 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI30)arg2 ;
+(id)tokenForKeyMask:(id)arg1 style:(SCD_Struct_UI30)arg2 displayInsets:(UIEdgeInsets)arg3 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI30)arg2 displayInsets:(UIEdgeInsets)arg3 ;
+(id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(CGSize)arg4 ;
+(id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(CGSize)arg3 ;
+(id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(CGSize)arg3 ;
-(void)dealloc;
-(CGSize)size;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)string;
-(void)setSize:(CGSize)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)stringForState:(int)arg1 ;
-(int)emptyFields;
-(bool)hasKey;
-(id)stringForKey:(id)arg1 state:(int)arg2 ;
-(id)stringForSplitState:(bool)arg1 ;
-(id)stringForRenderFlags:(long long)arg1 lightKeyboard:(bool)arg2 ;
-(long long)renderFlags;
-(id)initWithComponents:(id)arg1 name:(id)arg2 ;
-(int)_writeString:(id)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(int)_writeNumber:(float)arg1 toStr:(char*)arg2 ;
-(int)_writeEdgeInsets:(UIEdgeInsets)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(int)_writeArray:(id)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(id)stringForConstruction:(/*^block*/ id)arg1 ;
-(id)stringForComponentArray:(id)arg1 additionalValues:(/*^block*/ id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(void)setEmptyFields:(int)arg1 ;
-(void)setRenderFlags:(long long)arg1 ;
@end
