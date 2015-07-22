/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIButtonViewElement, SKUIViewElementText;

@interface SKUIDividerViewElement : SKUIViewElement {

	SKUIButtonViewElement* _button;
	long long _dividerType;
	BOOL _dividerTypeWasInitialized;
	SKUIViewElementText* _text;

}

@property (nonatomic,readonly) SKUIButtonViewElement * button; 
@property (nonatomic,readonly) long long dividerType; 
@property (nonatomic,readonly) SKUIViewElementText * text;                  //@synthesize text=_text - In the implementation block
-(SKUIButtonViewElement *)button;
-(BOOL)isEnabled;
-(SKUIViewElementText *)text;
-(long long)dividerType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(long long)pageComponentType;
@end
