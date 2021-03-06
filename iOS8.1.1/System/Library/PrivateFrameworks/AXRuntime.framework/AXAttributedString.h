/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <Foundation/NSString.h>
#import <AXRuntime/NSCopying.h>

@interface AXAttributedString : NSString <NSCopying> {

	CFAttributedStringRef _string;

}
+(id)axAttributedStringWithString:(id)arg1 ;
+(id)string;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(NSRange)arg3 ;
-(BOOL)isAXAttributedString;
-(id)initWithCFAttributedString:(CFAttributedStringRef)arg1 ;
-(void)replaceString:(CFStringRef)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)appendString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)lowercaseString;
-(id)uppercaseString;
-(id)attributesAtIndex:(long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)setAttributes:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(void)convertAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(CFAttributedStringRef)cfAttributedString;
-(void)appendAXAttributedString:(id)arg1 ;
-(void)enumerateAttributesUsingBlock:(/*^block*/id)arg1 ;
-(void)setAttributes:(id)arg1 withRange:(NSRange)arg2 ;
-(id)attributeValueForKey:(id)arg1 ;
-(id)coalescedFontAttributes;
-(id)axAttributedStringDescription;
-(BOOL)hasAttribute:(id)arg1 ;
@end

