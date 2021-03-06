/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface SKUIComposeTextFieldConfiguration : NSObject {

	UIEdgeInsets _borderInsets;
	int _columnIndex;
	char _isRequired;
	NSString* _label;
	unsigned _maxLength;
	NSString* _placeholder;
	NSString* _value;

}

@property (assign,nonatomic) UIEdgeInsets borderInsets;                    //@synthesize borderInsets=_borderInsets - In the implementation block
@property (assign,nonatomic) int columnIndex;                              //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,copy) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned maxLength;                           //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                         //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isRequired,nonatomic) char required;              //@synthesize isRequired=_isRequired - In the implementation block
@property (nonatomic,copy) NSString * value;                               //@synthesize value=_value - In the implementation block
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(NSString *)label;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)setColumnIndex:(int)arg1 ;
-(int)columnIndex;
-(UIEdgeInsets)borderInsets;
-(void)setBorderInsets:(UIEdgeInsets)arg1 ;
-(char)isRequired;
-(unsigned)maxLength;
-(void)setMaxLength:(unsigned)arg1 ;
-(void)setRequired:(char)arg1 ;
@end

