//
//  SQLMethods.h
//  NavCtrl
// Assignment6-SQL
// Integrate SQL
//
//  Created by Emiko Clark on 3/26/16.
//  Copyright © 2016 Aditya Narayan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "sqlite3.h"
#import "Product.h"
#import "Company.h"

@interface SQLMethods : NSObject

+(void) createOrOpenDB;
+(NSMutableArray*) populateCompanyFromSQL;
+(NSMutableArray *) populateProductsFromSQL:(Company *)currentCompany;

+(NSString *)getDBPath;

+(void) addCompanyToSQL:(Company *)currentCompany;
+(void) addProductToSQL:(Product *)currentProduct forCompany: (Company * )currentCompany;

+(void) deleteCompanyFromSQL:(Company *)currentCompany;
+(void) deleteProductFromSQL:(Product *)currentProduct;

+(void) updateCompanyToSQL:(Company *)currentCompany;
+(void) updateProductToSQL:(Product *)currentProduct;

+(void) MoveCompany:(Company *)currentCompany;
+(void) MoveProduct:(Product *)currentProduct;
@end
