#include "base_header.h"


#include "cquerytree2parm.h"

Cquerytree2Parm::Cquerytree2Parm(
				CNODE *n,
				char branch,
				int depth,
				SQLCONN *sqlconn,

				char *host,
				int port,
				char *user,
				char *pwd,
				char *base,
				char *tmptable,

				char *sqltmp,

				CMutex *sqlmutex,
				zval *result,
				const char *sqltrec,
				char **psortField,
				int sortMethod,
				const char * business,
				sb_stemmer *stemmer,
				const char *lng,
				const unsigned long rid
			)
{
	this->n = n;
	this->branch = branch;
	this->depth = depth;
	this->sqlconn = sqlconn;

	this->host = host;
	this->port = port;
	this->user = user;
	this->pwd = pwd;
	this->base = base;
	this->tmptable = tmptable;

	this->sqltmp = sqltmp;

	this->sqlmutex = sqlmutex;
	this->result = result;
	this->sqltrec = sqltrec;
	this->psortField = psortField;
	this->sortMethod = sortMethod;
	this->business = business;
	this->stemmer = stemmer;
	this->lng = lng;
	this->rid = rid;
}

Cquerytree2Parm::~Cquerytree2Parm()
{
	
}

